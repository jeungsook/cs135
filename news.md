---
layout: pages
title:  "News"
permalink: /news/
---

## Keep up-to-date with everything that's going on in the lab!

Here is where I'll post new information concerning the lab. For example: when I finish grading your exercises and when you can expect to recieve them, if the due dates for exercises change, etc...

## Newest Post:

### <a href="/cs135{{ site.posts[0].url }}">{{ site.posts[0].title }}</a>
**03/21/2017**

Hey guys,

If you're in my Mon lab I told you this already but, you really should write algorithms for Exercises 10 and 11.
If you don't Exercise 10 in particular can get very needlessly complicated. If your algorithm-writing and problem-decomposition
skills are lacking, it can also turn out complicated.

I would argue that you should have been writing algorithms since Exercise 4 and should for any and all programming projects
from this point onwards. Mrs. Misch has a programming "10 Commandments" that you may or may not have seen depending on whether you're
in her class or have checked out the UNLV tux website thoroughly. Here they are again to refresh your memories:

Lee's Ten Commandments for CS 135
I) Thou shalt read the book and notes.
II) Thou shalt begin the program immediately.
**III) Thou shalt work the problem out by hand first.**
**IV) Thou shalt develop an algorithm.**
V) Thou shalt not covet thy neighbor's code.
VI) Thou shalt not use global variables.
VII) Thou shalt comment thine code.
VIII) Thou shalt test thine code.
IX) Thou shalt add more comments to thine code.
X) Thou shalt test thine code again.

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
