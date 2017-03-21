//
//  SecondScene.hpp
//  enjoyGame_replaceScene
//
//  Created by xiang on 2017/3/20.
//
//

#ifndef SecondScene_hpp
#define SecondScene_hpp

#include <stdio.h>
#include "cocos2d.h"

using namespace cocos2d;

class SecondScene : public Layer {
public:
    static Scene *createScene();
    virtual bool init();
    
    void popScene(Ref *pSender);
    
    CREATE_FUNC(SecondScene);
};

#endif /* SecondScene_hpp */
