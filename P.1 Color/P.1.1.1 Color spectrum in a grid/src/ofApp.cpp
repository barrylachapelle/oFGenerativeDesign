#include "ofApp.h"

int stepX;
int stepY;

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    if(mouseX > 0 && mouseX < ofGetWidth() && mouseY < ofGetHeight() && mouseY > 0 ){
    
        stepX = mouseX + 2;
        stepY = mouseY + 2;
        
        for(int gridY = 0; gridY < ofGetHeight() + stepY; gridY+=stepY){
            for(int gridX = 0; gridX < ofGetWidth(); gridX+=stepX){
                
                ofColor rectcolor = ofColor(0);
                rectcolor.setHsb(ofMap(gridX, 0, ofGetWidth(), 0, 255), ofMap(gridY, 0, ofGetHeight(), 0, 255), 175);
                ofSetColor(rectcolor);
                ofDrawRectangle(gridX, gridY-mouseY, stepX, stepY);
                
            }
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
