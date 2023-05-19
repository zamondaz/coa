PImage backpic;
picture3[] aa;

void setup() {
    size(640, 640);
    backpic = loadImage("backpic.jpg");

    imageMode(CENTER);
    image(backpic, width / 2, height / 2);

    aa = new picture3[9];
    for (int i = 0; i < 9; i++) {
        aa[i] = new picture3(random(0, width), random(0, height), 80);
    }
}

void draw() {
    background(backpic);
    for (int i = 0; i < 9; i++) {
        aa[i].ship();
        aa[i].actship();
    }
    for (int i = 0; i < 9; i++) {
        if (i != 20) {
            for (int j = i + 1; j < 9; j++) {
                aa[i].collide(aa[j]);
            }
        }
    }
}