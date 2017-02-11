---
layout: pages
title:  "News"
permalink: /news/
---

## Keep up-to-date with everything that's going on in the lab!

Here is where I'll post new information concerning the lab. For example: when I finish grading your exercises and when you can expect to recieve them, if the due dates for exercises change, etc...

## Newest Post:

### Due Date for EX4 & 5 Have Passed
**02/10/2017**

The due date for Exercises 4 and 5 have passed. I've uploaded that Exercise 5 test program I said I'd upload. Check the Exercise 5 page. If you download, compile, and run that code, you'll be able to check your answers before I get around to grading them.

Please make sure you leave yourself enough time to do the Exercises. I had a lot of (literally) last minute submissions this time around.

If you do not get your Exercise in on time, I will not be able to grade it and you'll get a 0. If you mistype my email and I don't get it, you'll get a 0. If you don't send it to me with the mail command and attach your file to an email, you'll get a 0.

I don't want to have to give you a 0 so come to the lab or email me before the due date and I'll help you out, okay?

## Old Posts:

<ul>
  {% for post in site.posts %}
    <li>
      <a href="/cs135{{ post.url }}">{{ post.title }}</a>
    </li>
  {% endfor %}
</ul>
