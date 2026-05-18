// ovenTime returns the amount in minutes that the lasagna should stay in the
// oven.
int ovenTime() {
    unsigned int time = 40;
    
    return time;
}

/* remainingOvenTime returns the remaining
   minutes based on the actual minutes already in the oven.
*/
int remainingOvenTime(int actualMinutesInOven) {
   unsigned int remainingTime = ovenTime() - actualMinutesInOven;
    return remainingTime;
}

/* preparationTime returns an estimate of the preparation time based on the
   number of layers and the necessary time per layer.
*/
int preparationTime(int numberOfLayers) {
   unsigned int layerTime = numberOfLayers * 2;
    return layerTime;
}

// elapsedTime calculates the total time spent to create and bake the lasagna so
// far.
int elapsedTime(int numberOfLayers, int actualMinutesInOven) {
   unsigned int timeElapsed = preparationTime(numberOfLayers) + actualMinutesInOven;
    return timeElapsed;
}
