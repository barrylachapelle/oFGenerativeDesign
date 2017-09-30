#include "ofApp.h"

ofColor interCol;
ofColor color1;
ofColor color2;

vector<ofColor> colorsLeft;
vector<ofColor> colorsRight;

//--------------------------------------------------------------
void ofApp::setup(){
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    int tileCountX = 10;
    int tileCountY = 10;
    
    float tileWidth = ofGetWidth() / tileCountX;
    float tileHeight = ofGetHeight() / tileCountY;
    
    for(int gridY = 0; gridY < tileCountY; gridY++){
        
        //create random colors and push them to color vectors
        color1 = ofColor(ofRandom(0,60), ofRandom(0,100), 100);
        color2 = ofColor(ofRandom(160,190), 100, ofRandom(0,100));
        colorsLeft.push_back(color1);
        colorsRight.push_back(color2);
        
        for(int gridX = 0; gridX < tileCountX; gridX++){
            
            float amount = ofMap(gridX, 0, tileCountX - 1, 0, 1);
            interCol = colorsLeft[gridY].getLerped(colorsRight[gridY], amount);
            ofSetColor(interCol);
            float posX = tileWidth * gridX;
            float posY = tileHeight * gridY;
            ofDrawRectangle(posX, posY, tileWidth, tileHeight);

        }
        
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
