---
layout: pages
title:  "News"
permalink: /news/
---

## Keep up-to-date with everything that's going on in the lab!

Here is where I'll post new information concerning the lab. For example: when I finish grading your exercises and when you can expect to recieve them, if the due dates for exercises change, etc...

## Newest Post:

### {{ site.posts[0].title }}
**02/11/2017**

This is the second news post I've posted today. I'd also been editing the previous news post several times throughout the day. Each time I debated whether or not I should post a new news post or just edit it.

I've been a bit worried that some of you might miss some news posts that you might be interested in.

To help remedy this problem, I've added an RSS feed to this GitHub page. If you have an RSS reader, it should make it much easier to tell when there's new news.

## Old Posts:

<ul>
  {% for post in site.posts %}
    {% unless forloop.first == true %}
    <li>
      <a href="/cs135{{ post.url }}">{{ post.title }}</a>
    </li>
    {% endunless %}
  {% endfor %}
</ul>
