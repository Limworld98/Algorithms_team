# 로봇청소기의 경로 탐색 알고리즘
<h3>개요</h3> 
<p>
벽과 장애물이 존재하는 실내에서 로봇청소기가 효율적으로 청소할 수 있는 경로 탐색 알고리즘을 구현한다.<br>
배터리를 고려한 시간 제한이 존재하는 방식과, 시간 제한을 두지 않은 두가지 방식으로 구현하였다.<br>
회전 이동 청소방식과, 지그재그 이동 청소방식은 이미 청소한곳을 방문할경우 백트래킹 방식으로 이전 장소로 이동하여 청소를 재개한다<br><br>
</p>
<h3>무작위 청소방식</h3>
상하좌우 4방향 무작위로 이동<br><br>

![random1](https://user-images.githubusercontent.com/38485221/227836148-7235f73b-8bc6-434a-8e9d-50220038c682.gif)

<h3>회전 이동 청소방식</h3>
가장자리부터 안쪽으로 회전하며 이동<br><br>

![spin1](https://user-images.githubusercontent.com/38485221/227836174-7fc6569b-895f-4f9b-85d6-eeecb371f3df.gif)

<h3>지그재그 이동 청소방식</h3>
우측이나 좌측으로 방향을 전환하며 <br><br>

![zigzag1](https://user-images.githubusercontent.com/38485221/227836316-85db5fd3-fe7f-4ee1-b572-62399a88c4ae.gif)
