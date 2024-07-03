/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let result=init;
    const increment=()=>{
        return ++result;
    }
    
    const decrement=()=>(--result)

    function reset(){
        return (result=init);
    }
    return {increment,decrement,reset};
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */