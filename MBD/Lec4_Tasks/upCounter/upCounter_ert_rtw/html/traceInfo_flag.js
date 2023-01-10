function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["upCounter.c:38c24"]=1;
    this.traceFlag["upCounter.c:41c22"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["upCounter.c:38"]=1;
    this.lineTraceFlag["upCounter.c:39"]=1;
    this.lineTraceFlag["upCounter.c:41"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
