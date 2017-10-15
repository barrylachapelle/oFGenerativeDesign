#include "ofApp.h"

//vector<int> hueValues;

int circleResolution;
ofPath circle;
ofPath line;
float radius;
float angle;

//--------------------------------------------------------------
void ofApp::setup(){
    
    //white bg
    ofBackground(255);
    


}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    radius = 200;
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    line.clear();
    
    ofColor color = ofColor(240);
    ofSetColor(color);
    
    circleResolution = ofMap(mouseY, 0, ofGetHeight(), 0, 40);
    radius = mouseX-ofGetWidth()/2 + 0.5;
    angle = TWO_PI/circleResolution;
    
    ofSetCircleResolution(circleResolution);
    ofDrawCircle(ofGetWidth()/2,ofGetHeight()/2, 350);
    
    for(int i = 0; i < circleResolution; i++){
       
        //make sure theres a shape
        if(circleResolution > 2){
            
            float x = cos(angle*i) * radius;
            float y = sin(angle*i) * radius;
            
            line.moveTo(ofGetWidth()/2,ofGetHeight()/2);
            line.lineTo(x + ofGetWidth()/2 , y + ofGetHeight()/2);
            line.setStrokeColor(ofColor::black);
            line.setStrokeWidth(20);
            line.draw();
            
        }

    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    
    switch(key){
            
        case '1':
            break;
        case '2':
            break;
        case '3':
            break;
        case '4':
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
