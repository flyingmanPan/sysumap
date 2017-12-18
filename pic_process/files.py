import cv2
img = cv2.imread('1.jpg',cv2.CV_8UC1)
img=cv2.resize(img,(775,865))
cv2.imwrite('resize.jpg',img)