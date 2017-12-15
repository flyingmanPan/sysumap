import cv2
import numpy as np

img=cv2.imread('test2.jpg')
img=cv2.resize(img,(640,360))

converted = cv2.cvtColor(img, cv2.COLOR_RGB2HLS)
# white color mask
lower = np.uint8([  0, 250,   0])
upper = np.uint8([255, 255, 255])
white_mask = cv2.inRange(converted, lower, upper)

def update(val=0):
    upper=np.uint8([255,255,255])
    lower=np.uint8([
        cv2.getTrackbarPos('h','color'),
        cv2.getTrackbarPos('l','color'),
        cv2.getTrackbarPos('s','color')])
    pink_mask = cv2.inRange(converted, lower, upper)
    cv2.imshow('color',pink_mask)
    
'''
lower=np.uint8([195,218,235])
upper=np.uint8([255,255,255])
pink_mask = cv2.inRange(converted, lower, upper)
'''
h=195
l=218
s=235
cv2.namedWindow('color')
cv2.createTrackbar('h','color',h,255,update)
cv2.createTrackbar('l','color',l,255,update)
cv2.createTrackbar('s','color',s,255,update)
#masked=cv2.bitwise_or(pink_mask,white_mask)
#cv2.imwrite('1.jpg',pink_mask)
update()
cv2.waitKey(0)
'''
wyimg=cv2.bitwise_and(img, img, mask = white_mask)
gray = cv2.cvtColor(wyimg, cv2.COLOR_RGB2GRAY)
darken = (gray / 3).astype(np.uint8)
color_masked = cv2.bitwise_or(darken, white_mask)
blur_gray = cv2.GaussianBlur(color_masked, (7,7), 0)
edges = cv2.Canny(blur_gray, 50, 100)
cv2.imwrite('1.jpg',white_mask)
'''