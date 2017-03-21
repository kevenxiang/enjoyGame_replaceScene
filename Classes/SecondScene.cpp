//
//  SecondScene.cpp
//  enjoyGame_replaceScene
//
//  Created by xiang on 2017/3/20.
//
//

#include "SecondScene.hpp"

Scene *SecondScene::createScene() {
    
    auto scene = Scene::create();
    auto layer = SecondScene::create();
    scene->addChild(layer);
    return scene;
}

bool SecondScene::init() {
    
    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    auto label = Label::createWithTTF("Hi, are you mutou?", "fonts/Marker Felt.ttf", 40);
    label->setPosition(Vec2(visibleSize.width/2+origin.x, visibleSize.height/2+origin.y));
    this->addChild(label);
    
    //添加按钮
    auto pCloseItem = MenuItemImage::create("CloseNormal.png", "CloseSelected.png", CC_CALLBACK_1(SecondScene::popScene, this));
    pCloseItem->setPosition(Vec2(origin.x + visibleSize.width - pCloseItem->getContentSize().width/2 ,
                                origin.y + pCloseItem->getContentSize().height/2));
    
    
    auto pMenu = Menu::create(pCloseItem, NULL);
    pMenu->setPosition(Vec2(0, 0));
    this->addChild(pMenu, 1);
    
    
    
    return true;

}

void SecondScene::popScene(cocos2d::Ref *pSender) {
    Director::getInstance()->popScene();
}






















