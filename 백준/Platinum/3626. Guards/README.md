# [Platinum IV] Guards - 3626 

[문제 링크](https://www.acmicpc.net/problem/3626) 

### 성능 요약

메모리: 2020 KB, 시간: 12 ms

### 분류

브루트포스 알고리즘, 많은 조건 분기, 구현, 수학

### 문제 설명

<p>Agency of Criminal Matters (ACM) provides protection for corporate offices. The agency employs security guards that work in 12 hours shifts. Every 24 hours day consists of a 12 hours daylight shift and 12 hours nighttime shift (day starts with a daylight shift).</p>

<p>Security guards are hired to work on different schedules. Some schedules are simply periodic (certain pattern repeats in a specified number of days), while others are weekly (with a standard 7 days week) or depend on the day of the week. For this purpose Monday through Friday are considered to be workdays; Saturday and Sunday are considered to be weekends.</p>

<p>Each security guard works on one of the following four schedules:</p>

<p>1. Day of work (daylight and nighttime shifts) and two days (daylight and nighttime) of rest – work every third day.</p>

<p><img alt="" src="" style="height:45px; width:249px"></p>

<p><img alt="" src="" style="height:17px; width:45px"> Work on any day of week Monday through Sunday</p>

<p>2. Only daylight shifts on 5 workdays of a week (no work in nighttime and weekends).</p>

<p><img alt="" src="" style="height:48px; width:548px"></p>

<p><img alt="" src="" style="height:17px; line-height:20.7999992370605px; width:45px"> Work on the corresponding day of week</p>

<p>3. Day of work (daylight and nighttime), day of rest (daylight and nighttime), daylight shift of work, nighttime of rest, and one more day (daylight and nighttime) of rest — 3 shifts of work every 4 days.</p>

<p><img alt="" src="" style="height:47px; width:318px"></p>

<p><img alt="" src="" style="height:17px; line-height:20.7999992370605px; width:45px"> Work on any day of week Monday through Sunday</p>

<p>4. Day of work (daylight and nighttime), day of rest (daylight and nighttime), day of work only during daylight (rest during nighttime), day of work (daylight and nighttime), day of rest (daylight and nighttime); but if any daylight shift falls on the weekend then it is cancelled — 3 daylight shifts and 2 nighttime shifts every 5 days with the exception of weekends (where only nighttime shifts are possible).</p>

<p><img alt="" src="" style="height:48px; width:393px"></p>

<p><img alt="" src="" style="height:17px; line-height:20.7999992370605px; width:45px"> Work on any day of week Monday through Sunday</p>

<p><img alt="" src="" style="height:18px; width:44px"> Work only on workdays — Monday through Friday</p>

<p>ACM has to provide protection for a location based on the following requirements. There has to be at<br>
least a certain number of guards during daylight shifts on workdays, at least a certain number of guards during daylight shifts on weekends, and at least a certain number of guards during nighttime shifts (it does not matter whether it is a workday or a weekend).</p>

<p>As an additional requirement (for simplicity of planning) the schedule of protection for every location has to be regular. In a regular schedule there is a fixed number of guards that work on any particular schedule during every daylight workday shift, nighttime workday shift, daylight weekend shift, and nighttime weekend shift. For example, if 4 guards on the 1st schedule work on some daylight workday shift, then 4 guards on the 1st schedule work on all daylight workday shifts (they might be different persons, though).</p>

<p>Your task is to determine the minimal number of guards that have to be hired for protection of the specific location given its requirements.</p>

### 입력 

 <p>The input file consists of a line with three integer numbers — n1, n2, and n3 (1 ≤ n1, n2, n3 ≤ 1000). Here n1 is the minimum required number of guards during daylight shifts on workdays, n2 is the minimum required number of guards during daylight shifts on weekends, and n3 is the minimum required number of guards during nighttime shifts.</p>

### 출력 

 <p>Write to the output file a single line with four integer numbers — m1, m2, m3, and m4. Here mi is the</p>

<p>number of security guards working on i-th schedule that are needed to establish security of a location with the given requirements. You have to write an answer that requires minimal number of guards in total, choosing any answer among those.</p>

