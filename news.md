---
layout: pages
title:  "News"
permalink: /news/
---

## Keep up-to-date with everything that's going on in the lab!

Here is where I'll post new information concerning the lab. For example: when I finish grading your exercises and when you can expect to recieve them, if the due dates for exercises change, etc...

## Newest Post:

### <a href="/cs135{{ site.posts[0].url }}">{{ site.posts[0].title }}</a>
**04/09/2017**

Exercise 10 has been graded. As always, let me know if you haven't recieved your grade even though you submitted it.

Common mistates:
- Not removing spaces
- Last word missing

Overall, I think everyone did well with following the Exercise's directions this time around (everyone had at least one user-defined function).
Keep it up for the last Exercise.

Enjoy your Spring Break!

## Old Posts:

<ul>
  {% for post in site.posts %}
    {% unless forloop.first == true %}
      {{ post.date | date: "%m/%d/%Y" }} - <a href="/cs135{{ post.url }}">{{ post.title }}</a>
      <br>
    {% endunless %}
  {% endfor %}
</ul>
