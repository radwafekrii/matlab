function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["subsys.c:37c32"]=1;
    this.traceFlag["subsys.c:44c32"]=1;
    this.traceFlag["subsys.c:51c32"]=1;
    this.traceFlag["subsys.c:58c32"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["subsys.c:37"]=1;
    this.lineTraceFlag["subsys.c:44"]=1;
    this.lineTraceFlag["subsys.c:51"]=1;
    this.lineTraceFlag["subsys.c:58"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
