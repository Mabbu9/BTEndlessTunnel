//
//  ObstacleDoble.cpp
//  BTEndlessTunnel
//
//  Created by NSS on 3/27/14.
//
//

#include "ObstacleDoble.h"

using namespace cocos2d;

ObstacleDoble::ObstacleDoble() : BaseObstacle("obstaculo_1.png")
{
    obstacType = kJumpObstacle;
    sameCollisionArea = false;
    
    CCRect collideArea1 = CCRect(getContentSize().width * 0.1f, getContentSize().height * 0.5f, getContentSize().width * 0.5f, getContentSize().height * 0.5f);
    
    CCRect collideArea2 = CCRect(getContentSize().width * 0.3f, 0, getContentSize().width * 0.5f, getContentSize().height * 0.5f);
    
    vCollision.push_back(collideArea1);
    vCollision.push_back(collideArea2);
    
}