# [Unrated] 문제 32560 - 32560 

[문제 링크](https://www.acmicpc.net/problem/32560) 

### 성능 요약

메모리: 4900 KB, 시간: 20 ms

### 분류

분류 없음

### 제출 일자

2026년 04월 26일 22:14:38

### 문제 설명

<p>An <strong>anagram</strong> is any arrangement of the letters of a word in which each letter of the alphabet occurs exactly as many times as in the original. For example, <code>clarinets</code> is an anagram of <code>larcenist</code>.</p>

<p>An <strong>amalgram</strong> is any arrangement of the letters of <strong>two</strong> words in which each letter of the alphabet occurs <strong>at least</strong> as many times as in either of the originals. For example, <code>administration</code> is an amalgram of <code>mantis</code> and <code>raisin</code>, although not the shortest possible because the letter <code>d</code> appears in neither.</p>

<p>Given two words, invent an amalgram for them that contains as few letters as possible.</p>

### 입력 

 <ul>
	<li>One line containing lowercase Latin letters representing the word $a$ ($1 \le |a| \le 10^6$).</li>
	<li>One line containing lowercase Latin letters representing the word $b$ ($1 \le |b| \le 10^6$).</li>
</ul>

### 출력 

 <p>Output a minimally-long sequence of letters that represents an amalgram of $a$ and $b$. If there are multiple answers, you may output any of them. Your answer will be judged as correct if it contains at least all of the letters of $a$ and all of the letters of $b$, and there is no other possible answer that could be shorter.</p>

