import cv2
import numpy as np

img=cv2.imread('test1.jpg')
#img=cv2.resize(img,(464,518))

converted = cv2.cvtColor(img, cv2.COLOR_RGB2HLS)
# white color mask
lower1 = np.uint8([  0, 245,   0])
upper1= np.uint8([255, 255, 255])
white_mask = cv2.inRange(converted, lower1, upper1)

lower2=np.uint8([110,176,222])
upper2=np.uint8([255,255,255])
pink_mask = cv2.inRange(converted, lower2, upper2)
masked=cv2.bitwise_or(pink_mask,white_mask)

kernel = cv2.getStructuringElement(cv2.MORPH_ELLIPSE,(9,9))
    #return cv2.morphologyEx(roi_edges, cv2.MORPH_OPEN, kernel)
closeimg= cv2.morphologyEx(masked, cv2.MORPH_CLOSE, kernel)

cv2.imwrite('1.jpg',closeimg)


'''
h=195
l=218
s=235
cv2.namedWindow('color')
cv2.createTrackbar('h','color',h,255,update)
cv2.createTrackbar('l','color',l,255,update)
cv2.createTrackbar('s','color',s,255,update)

update()
cv2.waitKey(0)

wyimg=cv2.bitwise_and(img, img, mask = white_mask)
gray = cv2.cvtColor(wyimg, cv2.COLOR_RGB2GRAY)
darken = (gray / 3).astype(np.uint8)
color_masked = cv2.bitwise_or(darken, white_mask)
blur_gray = cv2.GaussianBlur(color_masked, (7,7), 0)
edges = cv2.Canny(blur_gray, 50, 100)
cv2.imwrite('1.jpg',white_mask)
'''