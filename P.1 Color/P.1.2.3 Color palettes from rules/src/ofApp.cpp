#include "ofApp.h"

vector<int> hueValues;
vector<int> saturationValues;
vector<int> brightnessValues;

int tileCountX = 50;
int tileCountY = 10;

int tileWidth;
int tileHeight;

//--------------------------------------------------------------
void ofApp::setup(){
    
    // init with random values
    for (int i=0; i < tileCountX; i++) {
        hueValues.push_back(ofRandom(0,360));
        saturationValues.push_back(ofRandom(0,100));
        brightnessValues.push_back(ofRandom(0,100));
    }
    
    tileWidth = ofGetWidth() / tileCountX;
    tileHeight = ofGetHeight() / tileCountY;

}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //white bg
    ofBackground(255);

    
    int i = 0;
    for (int gridY = 0; gridY < tileCountY; gridY++) {
        for (int gridX = -1; gridX < tileCountX; gridX++) {
            
            int index = i % tileCountX;
            
            ofColor rectcolor = ofColor(0);
            rectcolor.setHsb(hueValues[index], saturationValues[index], brightnessValues[index]);
            ofSetColor(rectcolor);
            ofDrawRectangle(tileWidth * gridX, tileHeight * gridY, tileWidth, tileHeight);
            i++;
            
        }
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    
    switch(key){
            
        case '1':
            for (int i=0; i < tileCountX; i++) {
                
                //clear vectors
                hueValues.erase(hueValues.begin() + i);
                saturationValues.erase(saturationValues.begin() + i);
                brightnessValues.erase(brightnessValues.begin() + i);
                
                //set new vals
                hueValues.push_back(ofRandom(0,255));
                saturationValues.push_back(ofRandom(0,100));
                brightnessValues.push_back(ofRandom(0,100));
            }
            break;
        case '2':
            for (int i=0; i < tileCountX; i++) {
                
                //clear vectors
                hueValues.erase(hueValues.begin() + i);
                saturationValues.erase(saturationValues.begin() + i);
                brightnessValues.erase(brightnessValues.begin() + i);
                
                //set new vals
                hueValues.push_back(ofRandom(0,255));
                saturationValues.push_back(ofRandom(0,100));
                brightnessValues.push_back(100);
            }
            break;
        case '3':
            for (int i=0; i < tileCountX; i++) {
                
                //clear vectors
                hueValues.erase(hueValues.begin() + i);
                saturationValues.erase(saturationValues.begin() + i);
                brightnessValues.erase(brightnessValues.begin() + i);
                
                //set new vals
                hueValues.push_back(ofRandom(0,255));
                saturationValues.push_back(100);
                brightnessValues.push_back(ofRandom(0,100));
            }
            break;
        case '4':
            for (int i=0; i < tileCountX; i++) {
                
                //clear vectors
                hueValues.erase(hueValues.begin() + i);
                saturationValues.erase(saturationValues.begin() + i);
                brightnessValues.erase(brightnessValues.begin() + i);
                
                //set new vals
                hueValues.push_back(0);
                saturationValues.push_back(0);
                brightnessValues.push_back(ofRandom(0,100));
            }
            break;
        case '5':
            break;
    }

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
