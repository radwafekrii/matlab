function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["mbd_1.c:37c30"]=1;
    this.traceFlag["mbd_1.c:44c30"]=1;
    this.traceFlag["mbd_1.c:51c30"]=1;
    this.traceFlag["mbd_1.c:58c30"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["mbd_1.c:37"]=1;
    this.lineTraceFlag["mbd_1.c:44"]=1;
    this.lineTraceFlag["mbd_1.c:51"]=1;
    this.lineTraceFlag["mbd_1.c:58"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
