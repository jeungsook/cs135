---
layout: pages
title:  "News"
permalink: /news/
---

## Keep up-to-date with everything that's going on in the lab!

Here is where I'll post new information concerning the lab. For example: when I finish grading your exercises and when you can expect to recieve them, if the due dates for exercises change, etc...

## Newest Post:

### Next Set of Exercises
**02/07/2017**

Exercise 6, 7, and 8 have been uploaded to Mrs. Lee Misch's website. I have also posted them here for anyone not in her class.

I will update the tips section of each Exercise as I get questions in the labs so you might want to keep an eye out on those.

On an unrelated note, this GitHub page now has a favicon. ;)
Please fav this page and keep checking on it. I asked Mr. John Kowalski about the projector and it looks like it won't be fixed anytime soon... :(

## Old Posts:

Ofcourse, there's not much here yet since I just created this GitHub page...

<ul>
  {% for post in site.posts %}
    <li>
      <a href="/cs135{{ post.url }}">{{ post.title }}</a>
    </li>
  {% endfor %}
</ul>
