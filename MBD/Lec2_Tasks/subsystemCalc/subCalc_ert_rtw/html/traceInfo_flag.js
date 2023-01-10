function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["subCalc.c:37c34"]=1;
    this.traceFlag["subCalc.c:44c34"]=1;
    this.traceFlag["subCalc.c:51c34"]=1;
    this.traceFlag["subCalc.c:58c34"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["subCalc.c:37"]=1;
    this.lineTraceFlag["subCalc.c:44"]=1;
    this.lineTraceFlag["subCalc.c:51"]=1;
    this.lineTraceFlag["subCalc.c:58"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
