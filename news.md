---
layout: pages
title:  "News"
permalink: /news/
---

## Keep up-to-date with everything that's going on in the lab!

Here is where I'll post new information concerning the lab. For example: when I finish grading your exercises and when you can expect to recieve them, if the due dates for exercises change, etc...

## Newest Post:

### <a href="/cs135{{ site.posts[0].url }}">{{ site.posts[0].title }}</a>

**09/10/2017**

Exercise 2 has been graded! Remember to have a similar comment at the top of every program you write for this class from now on, otherwise
I have to take off points.

I sent an email about it because it's important but I'll restate it here: Please put the word "Question" somewhere in the subject line
of your email if you have a question for me. I'm getting hundreds of submissions across all the exercises so it's hard for me to pick
out questions if yours gets sent into a gradebox.

## Old Posts:

<ul>
  {% for post in site.posts %}
    {% unless forloop.first == true %}
      {{ post.date | date: "%m/%d/%Y" }} - <a href="/cs135{{ post.url }}">{{ post.title }}</a>
      <br>
    {% endunless %}
  {% endfor %}
</ul>
