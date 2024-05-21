// Added a do-while loop which is repeatedly prompting the user to enter their birthday details and displaying the corresponding meanings, until the user decides to stop by entering 'N' or 'n' when-
// -asked if they would like to try another one.
#include <iostream>
#include <string>

// Function to get the meaning of the month
std::string getMonthMeaning(int month) {
    switch (month) {
    case 1: return "January: People born in the first month of the year are quite headstrong, and do not bend their will to the opinions of others. They have a strict code of conduct when it comes to their workplace and will not let anything come in the way of their ambitions. They are natural leaders, but are not very accommodative to the opinions of others. They make very good teachers.";
    case 2: return "February: February babies are blessed with a wealth of creativity. They like intellectual discussions, but abhor shallow people. They are free in spirit and are quite bohemian in their outlook towards life. They love travelling and adventures and feel at home with nature. They are very loyal friends and caring partners.";
    case 3: return "March: Having the same amount of creativity and imagination, these people are reserved and introspective. They like to keep to themselves and work in their own minds. They express their emotions with the help of art but generally prefer to be left alone. They are kind, gentle and compassionate on the outside, but are not particularly keen on revealing their emotions. They look for peace and quiet wherever they go, since noisy places disturb them.";
    case 4: return "April: People born in April love to be the cynosure of all eyes. They are quite dominant and do not like being bossed around. They are straightforward, often unpleasantly so, and have no reservations about telling others what they think of them. Their charisma is magnetic and they attract many friends and foes. Impulsive, they seldom think before they act.";
    case 5: return "May: Most talented musicians, actors and performers are born in May. They are socially active, and can make friends wherever they go. They need fun and intelligence in equal amounts. However, they are fickle and get bored very easily. They also change their opinions and desires frequently.";
    case 6: return "June: These people are extremely sensitive and lovable. They are not very outspoken and this is what is admirable about them. They use their foresight to make creative opportunities for themselves. They do not wear their hearts on a sleeve but are more perceptive towards the feelings of others than most people. They are very romantic but also easily jealous.";
    case 7: return "July: People born in July share most of their traits with the June babies but they have a more cheerful countenance. They are naturally adventurous, kind and sympathetic. They tend to be loners and sarcastic as well as a little eccentric. People born in July are susceptible to bouts of depression. They are amiable individuals but cannot be approached all the time. They are very temperamental and are easily hurt.";
    case 8: return "August: The ones born in August are given to community service. They are kind-hearted who hold family values above all else. They are inspiring individuals who are philanthropic and spiritual. They have no financial problems since their hardworking nature earns them a lot of money.";
    case 9: return "September: Intelligent, spiritual and melancholic- these words sum up a person born in September. They are always organized with their thoughts and actions and are generally geniuses in their own fields. They cannot deal with criticism, some of which is self-inflicted. Their self-censoring nature keeps them from achieving their goals at times. They look too deeply into situations, which is a problem.";
    case 10: return "October: People born in October are Fortune's children, and have luck on their side at all times. They achieve their targets all the time. They are very difficult to argue with because they put up a relentless fight. If angered, they can become very vindictive. They are lovers of art and literature and quick to envy. They are authentic and honest and are not given to pretense.";
    case 11: return "November: The penultimate month of the year brings empathy, positivity and clairvoyance in the lives of those born in it. They are sharp and unfathomable. Generosity is one of their strong traits. They are motivational, brave and driven, but do not like to be praised. They have no control over their emotions except anger- they have excellent anger management skills.";
    case 12: return "December: Persons born in the last month of the year have a lot of luck in finding their perfect partner and the best jobs. They are very responsive towards their friends but this leads to the shunning of responsibilities. They are risk-takers, and put themselves in potential danger sometimes. They are not fond of rules and reservations and are highly patriotic.";
    default: return "Invalid month";
    }
}

// Function to get the meaning of the day
std::string getDayMeaning(int day) {
    switch (day) {
    case 1: return "Born on the 1st: You are a self-starter with very innovative ways of creating opportunity. You've never been afraid to be the first to try something new. Your determination and endurance are powerful and will help you get through times of struggle and reach success.";
    case 2: return "Born on the 2nd: If your birthday is the 2nd, you have a great talent for finding solutions. Your intuitive and unbiased nature allow you to see all sides of any situation and advise others toward the most fair and beneficial outcome.";
    case 3: return "Born on the 3rd: Expression comes naturally to you. You are very skilled at communicating your thoughts through conversation and creative pursuits, and your upbeat, charismatic presence inspires others to get onboard with your ideas.";
    case 4: return "Born on the 4th: With a 4 Birthday number, you bring stability and rationality to any situation. You are the rock and your hard work and perseverance make you a dependable friend, colleague, parent, and partner.";
    case 5: return "Born on the 5th: Flexibility is your forte. When life throws you a curveball, you can easily adapt to new circumstances and find excitement in the unexpected change. This ability to turn on a dime gives you the power to jump on brief opportunities others may miss.";
    case 6: return "Born on the 6th: If your date of birth is the 6th, then your heart is your gift. You are a natural-born nurturer and have a great talent for helping and healing others. You are the epitome of self-sacrifice and a fierce protector of those you love.";
    case 7: return "Born on the 7th: You possess a very refined mind and a deep urge to uncover life's mysteries. Your ability to acquire vast knowledge on both the informational and spiritual planes gives you a greater awareness than most.";
    case 8: return "Born on the 8th: With a Birthday number 8, yours is a story of success. Your talent for setting and reaching goals is like no other. You are self-sufficient and capable and hold a great amount of power to achieve your ambitions.";
    case 9: return "Born on the 9th: It's your compassion that makes you shine. You're devoted to helping the greater good and have a strong talent for speaking up for others. Your soul is most satisfied when you are giving and being of service.";
    case 10: return "Born on the 10th: Your 10 Birthday number blesses you with great leadership skills. Your mind is sharp and allows you to dream up ingenious ideas and organize all the details, then direct others how to carry things out.";
    case 11: return "Born on the 11th: You have a keen awareness of what's happening around you. A strong intuition is your gift and will help you understand the unspoken feelings, thoughts, and fears of others. This insight allows you to be a great guide and supporter.";
    case 12: return "Born on the 12th: With the number 12 as your date of birth, creativity is a driving force in your life. Your imagination is rich and you are able to express your feelings and insights in unique ways that others can benefit from.";
    case 13: return "Born on the 13th: Driven by the number 13, you are a conscientious worker with a knack for coming up with creative ideas and turning them into something real. An optimistic but practical outlook keeps you determined and on track as you work steadily toward your goals.";
    case 14: return "Born on the 14th: You are open-minded and always up to try something new, yet you are wise enough to stop and think before you jump right into things. This pragmatic approach helps ensure your time, attention, and efforts are directed into meaningful experiences.";
    case 15: return "Born on the 15th: If you were born on the 15th day of the month, your love for others is powerful and you are able to spread your gift of support far and wide. Your curious and social nature brings you into contact with a variety of people, all who would benefit from your heartfelt words of wisdom.";
    case 16: return "Born on the 16th: Your 16 Birthday number blesses you with an inquisitive mind that allows you to uncover important truths. You have a special ability to read into other people's feelings and motives and share with them your wisdom.";
    case 17: return "Born on the 17th: The quality of work you can produce when you're going it alone is almost unbelievable. You are as independent as you are ambitious, capable of performing every step along the way with efficiency, focus, and skill.";
    case 18: return "Born on the 18th: You are both open-minded and open-hearted and your ambition is to leave this world better than you found it. You are independent by nature but will feel most fulfilled and successful when you are of service to others.";
    case 19: return "Born on the 19th: With your 19 Birthday number, independence and self-sufficiency are necessities to you. You are extremely capable in life and work and aren't afraid to take big risks to achieve the life you desire.";
    case 20: return "Born on the 20th: You relate to others on an almost cosmic level. You are dedicated to building cooperative, harmonious relationships of all kinds and can use your sensitive intuition to sense and address the needs of others.";
    case 21: return "Born on the 21st: If your birthday is on the 21st, you thrive in active social settings and find great value in connecting with people. Your natural charm paired with your creative styles of thinking and communicating makes you an exciting and inspiring presence to those in your life.";
    case 22: return "Born on the 22nd: A 22 Birthday number gives you the power to create great things. You are determined and hardworking and your ability to cooperate with others makes you an effective teammate or leader.";
    case 23: return "Born on the 23rd: You have a real zest for life and you're eager to experience anything and everything possible. You approach relationships and situations in an easygoing way and are a source of optimism and inspiration for others.";
    case 24: return "Born on the 24th: With your Birthday number 24, you have a heart of gold and are very skilled at maintaining balanced, stable relationships. You are loyal to your loved ones and are able to be the nurturer, protector, and provider all at once.";
    case 25: return "Born on the 25th: You have a great ability to take in and process information on both conscious and subconscious levels. Your curiosity is endless and your desire to dive deep into a variety of subjects will bring you an immense awareness of the world.";
    case 26: return "Born on the 26th: If you were born on the 26th day of the month, you have a desire to succeed and will feel most accomplished when your work benefits others. Your intuitive awareness of what people want allows you to come up with innovative solutions to meet their needs.";
    case 27: return "Born on the 27th: Your mind is wide open and you are tolerant and compassionate toward all ways of life. You are able to take in a vast amount of insights and information and apply this knowledge toward the greater good.";
    case 28: return "Born on the 28th: In an effort to accomplish great things, you recognize the value of working with others. You make a capable and compassionate leader who can bring people together and drive the team toward achievement.";
    case 29: return "Born on the 29th: With a 29 Birthday number, you have an amazing ability to bring things together. You receive powerful subconscious insights that help you clearly see how everything and everyone is connected.";
    case 30: return "Born on the 30th: If the date of your birth is the 30th, you are an original, innovative thinker and an excellent communicator. You have a great talent for using creativity to convey your ideas and your optimistic attitude has an uplifting effect on others.";
    case 31: return "Born on the 31st: Your approach to life is an effective mix of both practicality and imagination. Your mind is stirring with creative ideas and you have the organizational skills to manifest them on the physical plane.";
    default: return "Invalid day";
    }
}

// Function to get the meaning of the year
std::string getYearMeaning(int year) {
    switch (year) {
    case 2000: return "People born in the year 2000 are associated with the Dragon in Chinese astrology. Dragons are confident, intelligent, enthusiastic, and ambitious.";
    case 2001: return "People born in the year 2001 are associated with the Snake in Chinese astrology. Snakes are wise, intuitive, mysterious, and sophisticated.";
    case 2002: return "People born in the year 2002 are associated with the Horse in Chinese astrology. Horses are independent, energetic, adventurous, and sociable.";
    case 2003: return "People born in the year 2003 are associated with the Goat (or Sheep) in Chinese astrology. Goats are calm, gentle, sympathetic, and creative.";
    case 2004: return "People born in the year 2004 are associated with the Monkey in Chinese astrology. Monkeys are intelligent, witty, mischievous, and adaptable.";
    case 2005: return "People born in the year 2005 are associated with the Rooster in Chinese astrology. Roosters are honest, hardworking, confident, and outspoken.";
    case 2006: return "People born in the year 2006 are associated with the Dog in Chinese astrology. Dogs are loyal, sincere, reliable, and protective.";
    case 2007: return "People born in the year 2007 are associated with the Pig (or Boar) in Chinese astrology. Pigs are honest, kind, tolerant, and diligent.";
    case 2008: return "People born in the year 2008 are associated with the Rat in Chinese astrology. Rats are quick-witted, resourceful, versatile, and kind.";
    case 2009: return "People born in the year 2009 are associated with the Ox (or Buffalo) in Chinese astrology. Oxen are diligent, dependable, strong, and determined.";
    case 2010: return "People born in the year 2010 are associated with the Tiger in Chinese astrology. Tigers are brave, confident, competitive, and unpredictable.";
    case 2011: return "People born in the year 2011 are associated with the Rabbit (or Cat) in Chinese astrology. Rabbits are gentle, sensitive, compassionate, and artistic.";
    case 2012: return "People born in the year 2012 are associated with the Dragon in Chinese astrology. Dragons are confident, intelligent, enthusiastic, and ambitious.";
    case 2013: return "People born in the year 2013 are associated with the Snake in Chinese astrology. Snakes are wise, intuitive, mysterious, and sophisticated.";
    case 2014: return "People born in the year 2014 are associated with the Horse in Chinese astrology. Horses are independent, energetic, adventurous, and sociable.";
    case 2015: return "People born in the year 2015 are associated with the Goat (or Sheep) in Chinese astrology. Goats are calm, gentle, sympathetic, and creative.";
    case 2016: return "People born in the year 2016 are associated with the Monkey in Chinese astrology. Monkeys are intelligent, witty, mischievous, and adaptable.";
    case 2017: return "People born in the year 2017 are associated with the Rooster in Chinese astrology. Roosters are honest, hardworking, confident, and outspoken.";
    case 2018: return "People born in the year 2018 are associated with the Dog in Chinese astrology. Dogs are loyal, sincere, reliable, and protective.";
    case 2019: return "People born in the year 2019 are associated with the Pig (or Boar) in Chinese astrology. Pigs are honest, kind, tolerant, and diligent.";
    case 2020: return "People born in the year 2020 are associated with the Rat in Chinese astrology. Rats are quick-witted, resourceful, versatile, and kind.";
    case 2021: return "People born in the year 2021 are associated with the Ox (or Buffalo) in Chinese astrology. Oxen are diligent, dependable, strong, and determined.";
    case 2022: return "People born in the year 2022 are associated with the Tiger in Chinese astrology. Tigers are brave, confident, competitive, and unpredictable.";
    case 2023: return "People born in the year 2023 are associated with the Rabbit (or Cat) in Chinese astrology. Rabbits are gentle, sensitive, compassionate, and artistic.";
    default: return "Invalid year";
    }
}

// Function to display the meanings
void displayMeanings(int month, int day, int year) {
    std::cout << "Month meaning: " << getMonthMeaning(month) << std::endl;
    std::cout << "Day meaning: " << getDayMeaning(day) << std::endl;
    std::cout << "Year meaning: " << getYearMeaning(year) << std::endl;
}

// Function to get the month from user input
int getMonthFromUser() {
    int month;
    std::cout << "Please enter the month of your birthday (1-12): ";
    std::cin >> month;
    return month;
}

// Function to get the day from user input
int getDayFromUser() {
    int day;
    std::cout << "Please enter the day of your birthday (1-31): ";
    std::cin >> day;
    return day;
}

// Function to get the year from user input
int getYearFromUser() {
    int year;
    std::cout << "Please enter the year of your birthday (2000-2023): ";
    std::cin >> year;
    return year;
}

int main() {
    std::string tryAgain;

    std::cout << "Welcome to Birthday Date Meaning Generator!\n";

    do {
        int month = getMonthFromUser();
        int day = getDayFromUser();
        int year = getYearFromUser();

        displayMeanings(month, day, year);

        std::cout << "Would you like to try another one? (Y/N): ";
        std::cin >> tryAgain;

    } while (tryAgain == "Y" || tryAgain == "y");

    std::cout << "Thanks for playing!\n";

    return 0;
}