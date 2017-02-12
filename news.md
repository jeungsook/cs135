---
layout: pages
title:  "News"
permalink: /news/
---

## Keep up-to-date with everything that's going on in the lab!

Here is where I'll post new information concerning the lab. For example: when I finish grading your exercises and when you can expect to recieve them, if the due dates for exercises change, etc...

## Newest Post:

### Exercise 5 & Updates
**02/11/2017**

The due date for Exercises 4 and 5 have passed. I've graded your Exercise 5 first because it is easier to grade. As always, if you didn't receive a grade, foward the email you sent. 

I've added a new practice exercise. This one should be easier than the last one.

Also, I've uploaded that Exercise 5 test program I said I'd upload. Check the Exercise 5 page. **I posted explainations for common mistakes on there too.**

**There was a particular mistake that almost everyone made so I created a lesson about it.** See it under Lessons > Return Type.

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
