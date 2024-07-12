function randMax(max) {
    return Math.trunc(1e9 * Math.random()) % max;
}

var reel = {
    symbols: ["X", "Y", "Z", "W", "$", "*", "<", "@"],
    spin() {
        if (this.position == null) {
            this.position = randMax(this.symbols.length - 1);
        }
        this.position =
            (this.position + 100 + randMax(100)) % this.symbols.length;
    },
    display() {
        if (this.position == null) {
            this.position = randMax(this.symbols.length - 1);
        }
        return this.symbols[this.position];
    },
};
var slotMachine = {
    reels: [Object.create(reel), Object.create(reel), Object.create(reel)],
    spin() {
        this.reels.forEach(function spinReel(reel) {
            reel.spin();
        });
    },
    display() {
        this.reels.forEach(function displayReel(reel) {
            console.log(reel.display());
        });
    },
};

slotMachine.spin();
slotMachine.display();
// < | @ | *
// @ | X | <
// X | Y | @
slotMachine.spin();
slotMachine.display();
// Z | X | W
// W | Y | $
// $ | Z | *
