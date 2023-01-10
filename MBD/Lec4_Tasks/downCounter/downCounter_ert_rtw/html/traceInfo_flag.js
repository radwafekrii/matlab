function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["downCounter.c:38c26"]=1;
    this.traceFlag["downCounter.c:39c24"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["downCounter.c:38"]=1;
    this.lineTraceFlag["downCounter.c:39"]=1;
    this.lineTraceFlag["downCounter.c:41"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
