# mu-puzzle
Various implementations of Douglas Hofstadter's MU-puzzle in C++.

Recently I have been reading the famous book _Godel, Escher, Bach_ by Douglas Hofstadter. To be honest, some of it was over my head, but one thing I thought was interesting was the discussion of __formal systems.__ Basically, a formal system is a few symbols that can be combined to make strings according to some basic rules. I will write the MUI-system's rules here, in case you don't know them.

1. Suppose your string ends in an `I`. You may add a `U` to the end of it.
2. You can double the string after the `M`. Example: `MIU` → `MIUIU`.
3. Suppose your string includes the sequence `III`. You may replace it with a `U`.
4. If your string includes the sequence `UU`, you may drop it.

So with these simple rules, and a starting string of `MI`, your goal is to try to change the string to `MU`. If you try this, after a while you will see it is impossible, as you can't get rid of the `I`s. I still thought it was cool, and I made a few things in C++ to make theorems for this system. Actually, there is only one, right now, but there will be more. 

I plan to have a few different styles of automatic theorem generator, and then a manual one where you can make them by specifying the rule to apply. It'll be interesting, I think.

For now it's pretty bad, but I'm experimenting with order to make more variety of theorems. Right now it applies 2 rules and then infinitely applies Rule 2 because that's the way I wrote it. For now at least. Anyway, have fun with this, and if you think of a better implementation, feel free to make a PR.
