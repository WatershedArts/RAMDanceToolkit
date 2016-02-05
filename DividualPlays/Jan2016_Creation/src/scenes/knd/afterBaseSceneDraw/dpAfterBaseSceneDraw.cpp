//
//  dpAfterBaseSceneDraw.cpp
//  RAMDanceToolkit
//
//  Created by kezzardrix2 on 2016/02/03.
//
//

#include "dpAfterBaseSceneDraw.h"

void dpAfterBaseSceneDraw::setup(){
    
    doSomething.setup();
    dancerCue.setup();

    mBDisplayOutline.setup();
    
    ofAddListener(ofEvents().draw, this, &dpAfterBaseSceneDraw::draw);
    ofAddListener(ofEvents().update, this, &dpAfterBaseSceneDraw::update);
    
};

void dpAfterBaseSceneDraw::update(ofEventArgs& args){
    
    doSomething.update();
    dancerCue.update();
 
    mBDisplayOutline.update();
    
};

void dpAfterBaseSceneDraw::draw(ofEventArgs& args){

    doSomething.draw();
    dancerCue.draw();

    mBDisplayOutline.draw();

};