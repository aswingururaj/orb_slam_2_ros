/**
* This file is part of ORB-SLAM2.
*
* Copyright (C) 2014-2016 Raúl Mur-Artal <raulmur at unizar dot es> (University of Zaragoza)
* For more information see <https://github.com/raulmur/ORB_SLAM2>
*
* ORB-SLAM2 is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* ORB-SLAM2 is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with ORB-SLAM2. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef ORBSLAM2_ROS_MONONODE_H_
#define ORBSLAM2_ROS_MONONODE_H_

#include <iostream>
#include <algorithm>
#include <fstream>
#include <chrono>

#include <ros/ros.h>
#include <cv_bridge/cv_bridge.h>

#include <opencv2/core/core.hpp>

#include "System.h"


class MonoNode
{
  public:
    MonoNode (ORB_SLAM2::System* pSLAM, ros::NodeHandle &node_handle);
    ~MonoNode ();
    void ImageCallback (const sensor_msgs::ImageConstPtr& msg);

  private:
    ORB_SLAM2::System *orb_slam;
    ros::Subscriber image_subscriber;
};

#endif //ORBSLAM2_ROS_MONONODE_H_
