function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["matFunc.c:42c14"]=1;
    this.traceFlag["matFunc.c:45c20"]=1;
    this.traceFlag["matFunc.c:48c8"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["matFunc.c:37"]=1;
    this.lineTraceFlag["matFunc.c:41"]=1;
    this.lineTraceFlag["matFunc.c:42"]=1;
    this.lineTraceFlag["matFunc.c:45"]=1;
    this.lineTraceFlag["matFunc.c:48"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
