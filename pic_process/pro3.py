import cv2
import numpy as np
from matplotlib import pyplot as plt
rho = 1
theta = np.pi / 180
threshold = 100
min_line_length = 40
max_line_gap = 10
img = cv2.imread('1.jpg',cv2.CV_8UC1)
#img=cv2.GaussianBlur(img,(5,5),0)
#cv2.imwrite('gauss.jpg',img)
kernel = np.ones((3,3),np.uint8)
img = cv2.morphologyEx(img, cv2.MORPH_OPEN, kernel)
'''img_black=cv2.bitwise_not(img)
cv2.imwrite('3.jpg',img_black)'''

'''
kernel = cv2.getStructuringElement(cv2.MORPH_ELLIPSE,(5,5))
closeimg= cv2.morphologyEx(img, cv2.MORPH_CLOSE, kernel)
kernel2 = np.ones((5,5),np.uint8)
erosion = cv2.erode(closeimg,kernel2,iterations = 1)
cv2.imwrite('2.jpg',erosion)
'''

def draw_lines(img, lines, color=[255, 0, 0], thickness=2):
    for line in lines:
        for x1, y1, x2, y2 in line:
            '''
            if x2-x1==0:
                k=
            k = (y2 - y1) / (x2 - x1)
            if abs(k)>0.3 :
                '''
            cv2.line(img, (x1, y1), (x2, y2), color, thickness)

def hough_lines(img, rho, theta, threshold, min_line_len, max_line_gap):
    lines = cv2.HoughLinesP(img, rho, theta, threshold, np.array([]), minLineLength=min_line_len, maxLineGap=max_line_gap)
    line_img = np.zeros((img.shape[0], img.shape[1], 3), dtype=np.uint8)
    draw_lines(line_img, lines)
    #draw_lanes(line_img, lines)
    return line_img


#img=cv2.conver
line_img = hough_lines(img, rho, theta, threshold, min_line_length, max_line_gap)
cv2.imwrite('line.jpg',line_img)

fast = cv2.FastFeatureDetector_create()
# find and draw the keypoints
kp = fast.detect(img,None)
img2 = cv2.drawKeypoints(img, kp, None, color=(255,0,0))
# Print all default params
print( "Threshold: {}".format(fast.getThreshold()) )
print( "nonmaxSuppression:{}".format(fast.getNonmaxSuppression()) )
print( "neighborhood: {}".format(fast.getType()) )
print( "Total Keypoints with nonmaxSuppression: {}".format(len(kp)) )
cv2.imwrite('fast_true.png',img2)
# Disable nonmaxSuppression
fast.setNonmaxSuppression(0)
kp = fast.detect(img,None)
print( "Total Keypoints without nonmaxSuppression: {}".format(len(kp)) )
img3 = cv2.drawKeypoints(img, kp, None, color=(255,0,0))
cv2.imwrite('fast_false.png',img3)

orb = cv2.ORB_create()
# find the keypoints with ORB
kp = orb.detect(img,None)
# compute the descriptors with ORB
kp, des = orb.compute(img, kp)
# draw only keypoints location,not size and orientation
img4 = cv2.drawKeypoints(img, kp, None, color=(0,255,0), flags=0)
cv2.imwrite('orb.png',img4)