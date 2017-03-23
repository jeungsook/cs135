---
layout: pages
title:  "News"
permalink: /news/
---

## Keep up-to-date with everything that's going on in the lab!

Here is where I'll post new information concerning the lab. For example: when I finish grading your exercises and when you can expect to recieve them, if the due dates for exercises change, etc...

## Newest Post:

### <a href="/cs135{{ site.posts[0].url }}">{{ site.posts[0].title }}</a>
**03/23/2017**

Exercise #9 has been graded. Let me know if you have any issues with your grade but, please read the following before you do.

Common mistakes I saw were:

- Not checking both the height and width of the rectangle. If **either one or the other** is < 2, then the message should have been displayed
- Not printing out the triangle with the "right" justification (pun intended)

A big one (but thankfully not common) was creating the program from scratch. Read the directions carefully from now on.

In my last news post, I mentioned the issue with submitting your Exercise in the 11:50-12:06am range.
Please start your programs earlier and ask me questions / come to the labs if you're stuck.

Lee's Ten Commandments for CS 135: <br>
I) Thou shalt read the book and notes.<br>
II) Thou shalt begin the program immediately.<br>
**III) Thou shalt work the problem out by hand first.**<br>
**IV) Thou shalt develop an algorithm.**<br>
V) Thou shalt not covet thy neighbor's code.<br>
VI) Thou shalt not use global variables.<br>
VII) Thou shalt comment thine code.<br>
VIII) Thou shalt test thine code.<br>
IX) Thou shalt add more comments to thine code.<br>
X) Thou shalt test thine code again.<br>

Three and four are what I'm pushing from now on. **I won't help you in lab or office hours unless you can show me an algorithm
for the Exercise or Assignment you need help on.** Repeat: write algorithms. This is a really vital skill that you will need 
as the programs you'll be expected to write become more and more complex. If you don't want to do it, if you're some kind of 
super programmer that can keep tons of variables, functions, classes and their inner workings and interconnectedness in mind 
all at once, fantastic! Don't write an algorithm and donate your brain to science when you naturally pass away (hopefully in
the far future).

For us normal meatbags, we need to write algorithms, yes?

Okay, super. One other thing: a lot of you submitted your Exercise 9 really close to or over the due time.
Please don't do that.

That's all, see you next lab. I will go over Exercise 9 completely.

## Old Posts:

<ul>
  {% for post in site.posts %}
    {% unless forloop.first == true %}
      {{ post.date | date: "%m/%d/%Y" }} - <a href="/cs135{{ post.url }}">{{ post.title }}</a>
      <br>
    {% endunless %}
  {% endfor %}
</ul>
