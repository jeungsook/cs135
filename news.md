---
layout: pages
title:  "News"
permalink: /news/
---

## Keep up-to-date with everything that's going on in the lab!

Here is where I'll post new information concerning the lab. For example: when I finish grading your exercises and when you can expect to recieve them, if the due dates for exercises change, etc...

## Newest Post:

### <a href="/cs135{{ site.posts[0].url }}">{{ site.posts[0].title }}</a>

**09/24/2017**

I've graded Exercises 5 & 6. As always, let me know if you didn't recieve a gradesheet.

Couple things:

About exercise 5: make sure you understand then instructions and follow them to the letter. Being precise is very important in 
Computer Science.

About exercise 6: despite my tips and warnings in lab, we didn't do so well on this exercise. This material might show up on your
next test depending on your professor so I'd make sure you know why you lost points if you didn't get a perfect score.

## Old Posts:

<ul>
  {% for post in site.posts %}
    {% unless forloop.first == true %}
      {{ post.date | date: "%m/%d/%Y" }} - <a href="/cs135{{ post.url }}">{{ post.title }}</a>
      <br>
    {% endunless %}
  {% endfor %}
</ul>
