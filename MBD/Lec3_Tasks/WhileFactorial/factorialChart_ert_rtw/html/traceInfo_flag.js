function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["factorialChart.c:45c14"]=1;
    this.traceFlag["factorialChart.c:48c27"]=1;
    this.traceFlag["factorialChart.c:49c8"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["factorialChart.c:43"]=1;
    this.lineTraceFlag["factorialChart.c:44"]=1;
    this.lineTraceFlag["factorialChart.c:45"]=1;
    this.lineTraceFlag["factorialChart.c:48"]=1;
    this.lineTraceFlag["factorialChart.c:49"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
