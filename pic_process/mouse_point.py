import cv2
import numpy as np
ix,iy = -1,-1
arr=[]
arr_len=0
line=[]
line_len=0
pair=[]
pair_len=0
def drawFunc(event,x,y,flags,param):
    global ix,iy,drawing
    if event==cv2.EVENT_MBUTTONDOWN:
        ix,iy=x,y
    elif event == cv2.EVENT_MBUTTONUP:
        print(ix,iy)
        isNear=False
        for i in arr:
            dis=(i.pt[0]-ix)*(i.pt[0]-ix)+(i.pt[1]-iy)*(i.pt[1]-iy)
            dis=dis**(0.5)
            print("dis",dis)
            if dis<= 10:
                isNear=True
        if isNear==False:
            print("append")
            arr.append(cv2.KeyPoint(ix,iy,1))

    global ix2,iy2
    if event==cv2.EVENT_LBUTTONDOWN:
        ix,iy=x,y
    elif event==cv2.EVENT_LBUTTONUP:
        ix2,iy2=x,y
        num1=0
        num2=0
        for i in arr:
            dis=(i.pt[0]-ix)*(i.pt[0]-ix)+(i.pt[1]-iy)*(i.pt[1]-iy)
            dis=dis**(0.5)
            if dis <10:
                break
            num1+=1
        for i in arr:
            dis=(i.pt[0]-ix2)*(i.pt[0]-ix2)+(i.pt[1]-iy2)*(i.pt[1]-iy2)
            dis=dis**(0.5)
            if dis <10:
                break
            num2+=1
        pair.append([num1,num2,1,0])
        #line.append([ix,iy,ix2,iy2])
        line.append([
            int(arr[num1].pt[0]),
            int(arr[num1].pt[1]),
            int(arr[num2].pt[0]),
            int(arr[num2].pt[1])
            ])

    if event==cv2.EVENT_RBUTTONDOWN:
        ix,iy=x,y
    elif event==cv2.EVENT_RBUTTONUP:
        ix2,iy2=x,y
        num1=0
        num2=0
        for i in arr:
            dis=(i.pt[0]-ix)*(i.pt[0]-ix)+(i.pt[1]-iy)*(i.pt[1]-iy)
            dis=dis**(0.5)
            if dis <10:
                break
            num1+=1
        for i in arr:
            dis=(i.pt[0]-ix2)*(i.pt[0]-ix2)+(i.pt[1]-iy2)*(i.pt[1]-iy2)
            dis=dis**(0.5)
            if dis <10:
                break
            num2+=1
        pair.append([num1,num2,0,1])
        #line.append([ix,iy,ix2,iy2])
        line.append([
            int(arr[num1].pt[0]),
            int(arr[num1].pt[1]),
            int(arr[num2].pt[0]),
            int(arr[num2].pt[1])
            ])


cv2.namedWindow('image')
img = cv2.imread('1.jpg',0)
img=cv2.resize(img,(775,865))
cv2.setMouseCallback('image',drawFunc)
while(1):
    cv2.imshow('image',img)
    k = cv2.waitKey(1) & 0xFF
    if arr_len!= len(arr):
        arr_len=len(arr)
        img = cv2.drawKeypoints(img, arr, None, color=(255,0,0))
    elif line_len!=len(line):
        line_len=len(line)
        color=[100,100, 100]
        cv2.line(img, (line[line_len-1][0], line[line_len-1][1]),
        (line[line_len-1][2], line[line_len-1][3]), color, 2)
    elif k == 27:
        break
cv2.destroyAllWindows()

filename='data.txt'
file=open(filename,'w')
count=0
file.write('vertex_num: ')
file.write(str(len(arr)))
file.write('\n')
for i in arr:
    file.write(str(count))
    file.write(' ')
    file.write(str(int(i.pt[0])))
    file.write(' ')
    file.write(str(int(i.pt[1])))
    file.write('\n')
    count+=1

count=0
file.write('edge_num: ')

file.write(str(len(pair)))
file.write('edge_list(vertex1,vertex2,weight,pavement?driveway?): \n')
file.write('\n')
for i in pair:
    file.write(str(i[0]))
    file.write(' ')
    file.write(str(i[1]))
    file.write(' ')
    file.write(str(
        int(
            (
            (arr[i[0]].pt[0]-arr[i[1]].pt[0])**2+
            (arr[i[0]].pt[1]-arr[i[1]].pt[1])**2
            )**0.5)
        ))
    file.write(' ')
    file.write(str(i[2]))
    file.write(' ')
    file.write(str(i[3]))
    file.write('\n')
    count+=1
#file.write(arr)
file.close()