---
layout: pages
title:  "News"
permalink: /news/
---

## Keep up-to-date with everything that's going on in the lab!

Here is where I'll post new information concerning the lab. For example: when I finish grading your exercises and when you can expect to recieve them, if the due dates for exercises change, etc...

## Newest Post:

### <a href="/cs135{{ site.posts[0].url }}">{{ site.posts[0].title }}</a>
**03/31/2017**

I've posted that lesson that I said I was going to create. It's a big one (more like 3 lessons in one) so check it out here:
[LINK](https://jeungsook.github.io/cs135/lessons/userfunctions/)

I also made a short lesson on how computers allocate memory for variables. I was going to put it in the function lesson, but that was just
getting too huge.

Also, it looks like Exercise 10 and 11 are going to be the last lessons in this class (I thought there were going to be two more).

## Old Posts:

<ul>
  {% for post in site.posts %}
    {% unless forloop.first == true %}
      {{ post.date | date: "%m/%d/%Y" }} - <a href="/cs135{{ post.url }}">{{ post.title }}</a>
      <br>
    {% endunless %}
  {% endfor %}
</ul>
