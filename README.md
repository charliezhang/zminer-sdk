# Instructions

1. Download `zminer_core2.framework`.

2. Add to your XCode project by dragging to the projects `Framework` directory. In build phases, make sure to embed framework `zminer_core2.framework`  

3. Add following code.
~~~~
import zminer_core2

let zMinerWrapper: ZMinerWrap  = ZMinerWrap()

self.zMinerWrapper.setResourceUsagePercentage(25);  // Using 25% of the maximum comupation resource.
self.zMinerWrapper.start(withWorkerId: "MY_WORKER_ID");    // Replace this with your worker ID.
~~~~


Call following function to stop mining. (for instance, you might want to stop mining activity when app goes to background.) 
~~~~
self.zMinerWrapper.stop();
~~~~

To get hash rate:  
~~~~
self.zMinerWrapper.getHashRate();
~~~~

3. Check your earnings at mining pool.
