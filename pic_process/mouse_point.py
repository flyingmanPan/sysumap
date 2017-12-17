import cv2
import numpy as np
drawing = False # true if mouse is pressed
mode = True # if True, draw rectangle. Press 'm' to toggle to curve
ix,iy = -1,-1
arr=[]
tot=[]
def draw_point(event,x,y,flags,param):
    global ix,iy,drawing
    if event==cv2.EVENT_LBUTTONDOWN:
        ix,iy=x,y
    elif event == cv2.EVENT_LBUTTONUP:
        print(ix,iy)
        arr.append(cv2.KeyPoint(ix,iy,1))

#img = np.zeros((512,512,3), np.uint8)
#cv2.namedWindow('image',cv2.WINDOW_NORMAL)
cv2.namedWindow('image')
img = cv2.imread('1.jpg',0)
img=cv2.resize(img,(775,865))
#cv2.setMouseCallback('image',draw_circle)
cv2.setMouseCallback('image',draw_point)
while(1):
    cv2.imshow('image',img)
    k = cv2.waitKey(1) & 0xFF
    if k == ord('p'):
        img = cv2.drawKeypoints(img, arr, None, color=(255,0,0))
    elif k == 27:
        break
cv2.destroyAllWindows()
filename='data.txt'
file=open(filename,'w')
count=0

for i in arr:
    file.write(str(count))
    file.write(' ')
    file.write(str(i.pt[0]))
    file.write(' ')
    file.write(str(i.pt[1]))
    file.write('\n')
    count+=1
#file.write(arr)
file.close()