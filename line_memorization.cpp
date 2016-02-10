#include <iostream>

using namespace std;

int main()
{
  string lines[] = { //"Hi, my name is Puck and I am here to tell you an amazing story.",
		     //"Our story begins with Hermia.",
		     // "She had been told by her father that she is not permitted to marry her one true love, Lysander",
		     //"And must instead marry Demetris.",

		     //"Are you getting all of this? Hermia loves Lysander but is supposed to marry Demetrius. ",
		     //"But Hermia's friend Helena is in love with Demetrius.",

		     //"I'll follow you. I'll lead you about a round",
		     //"Through bog, through bush, through brake, through brier",
		     //"Sometime a horse I'll be, sometime a hound, a hog, a headless bear, a fire",
		     //"And neigh, and bark, and grunt, and roar, and burn",
		     //"Like horse, hound, hog, bear and fire at every turn",

		     //"Oh I forgot to tell you, this sleeping lady here; this is Titana -- Queen of the fairies.",
		     //"Her husband Oberon wanted to teach her a lesson, and had me sprinkle her eyelids with a love potion.",

		     //"Well that went according to plan, but what I am about to tell you is a little bit messier",
		     //"I was trying to help Helena by making Demetrius fall in love with her, but those human boys all look the same",
		     //"and by mistake, I love potioned the wrong one. And then the right one... so...",

		     // "Okay, admittedly, not my best work. But I can fix this!",

		     "On the ground",
		     "Sleep sound:",
		     "I'll apply",
		     "To your eye",
		     "Gentle lover, remedy.",
		     "When thou wakest",
		     "Thou takest",
		     "True delight",
		     "In the sight",
		     "Of thy former lady's eye",
		     "And the country proverb known",
		     "That every man should take his own",
		     "In your waking shall have been shown",
		     "Jack shall have Jill",
		     "Nought shall go ill",
		     "The man shall have his mare again, and all shall be well."

		     "Am I good, or am I good? We're almost ready for our young lovers to live happily ever after",
		     "But I think they need one more thing! How about a first date of sorts?",
		     "How about a play!", };

  for (int i = 0; i < sizeof(lines) / sizeof(lines[0]); i++) {
    cout << lines[i] << endl;
    cin.ignore();
  }
  
}
