# Prevent-Flooding(범람을 예방하자)
개발 기간: 2023-12-02~2023-12-09  
개발 인원: 3명  
맡은 업무: 주제 선별, 아두이노 개발  


## 프로젝트 배경
- 지구온난화로 인한 기온 상승으로 인해 발생하는 침수 피해 증가  
- 집중 호우와 같은 재난 상황을 막는 것은 불가능하므로, 피해를 예방하는 자동차수판을 개발

  
## 기술 스택
- **하드웨어**: Arduino, SZH-EK057, SG-90, FQ-011, 1602 LCD, SZH-TH0018  


## 주요 기능
1. **수위 지정**  
   - 수위센서의 데이터 값을 확인하며 일정 수위를 지정  
  
2. **알림 서비스**  
   - LCD에 실시간 수위를 출력  
   - 일정 수위를 넘어가게 되면 버저가 울리며 LCD를 통해 알림  

3. **차수판 작동**  
   - 일정 수위를 넘어가면 서보 모터가 작동되며 바닥에 매장되어 있던 차수판 설치  

   
## 시스템 구성 요소
1. **수위 측정**  
   - SZH-EK057 수위 센서: 수위를 측정하고 데이터로 시각화  
   - Arduino UNO: 센서 데이터를 처리하고, 임계값을 설정  

2. **알림 및 표시**  
   - 1602 LCD: 실시간 수위와 임계값 초과 시 위험 상태를 알림  
   - FQ-011 Buzzer: 임계값 초과 시 경고음을 울림  
  
3. **차수판 설치**  
   - SG-90 Servo Motor: 임계값 초과 시 모터가 동작  

## 클래스 다이어그램
![C_D](https://github.com/user-attachments/assets/20d28a59-1c1c-4634-9fc5-a8aff488d3c5)  
1. Buzzer  
   - 수위 센서의 데이터가 임계값을 초과하냐에 따라 제어  

2. Water Level Sensor  
   - 임계값을 설정하고 센서 데이터를 읽고 저장  

3. Servo Motor  
   - 수위 센서의 데이터가 임계값을 초과하냐에 따라 제어  

4. LCD  
   - 실시간 수위와 임계값 초과 시 위험 상태 알림  

5. Button  
   - 동작된 서보 모터를 원위치로 복귀  

## DFD
![DFD](https://github.com/user-attachments/assets/1e5f77dc-22c2-4e2c-8d94-aaf865f4d9d9)  
1. **프로세스**  
   - 임계값 초과 여부 확인: 현재 수위 센서의 값과 임계값을 비교  
   - 차수판 동작: 서보 모터가 작동되며 매립되어 있던 차수판이 지상으로 올라와 설치  
   - 경고음 발생: 부저가 울리며 주변에 차수판이 설치되고 있음을 알림  
   - 상태 알림: 수위가 일정 수치를 넘어갔음을 알림  

## FlowChart
![F_C](https://github.com/user-attachments/assets/8c4028f8-e10b-46df-85fc-54088e98ece2)  


## 사진 및 영상
### 회로  
![4-2](https://github.com/user-attachments/assets/92849b14-5cbe-4411-bd70-eb40ffbff3e7)  

### 차수판 설치 여부  
![5-1](https://github.com/user-attachments/assets/6d32b528-f2cd-49a8-beff-b98e063d3e91) ![3-3](https://github.com/user-attachments/assets/b0dfb5f0-30d4-42bf-8e29-b50231cf9cad)  

### 수위 도달 여부  
![2-1](https://github.com/user-attachments/assets/9bba91d9-cf70-411f-b219-c7c6c2239fab) ![1-1](https://github.com/user-attachments/assets/ee04a0cf-b65f-457e-b0bd-1f89182e688b)  

### 영상
https://github.com/user-attachments/assets/14b696f6-855c-4ddd-945d-691f826cd7fd

## 마무리
