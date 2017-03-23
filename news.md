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

In my last news post, I mentioned the issue with submitting your Exercise in the 11:50pm-12:06am range.
Please start your programs earlier and ask me questions / come to the labs if you're stuck.

## Old Posts:

<ul>
  {% for post in site.posts %}
    {% unless forloop.first == true %}
      {{ post.date | date: "%m/%d/%Y" }} - <a href="/cs135{{ post.url }}">{{ post.title }}</a>
      <br>
    {% endunless %}
  {% endfor %}
</ul>
