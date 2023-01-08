function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["mbd_1.c:37c31"]=1;
    this.traceFlag["mbd_1.c:44c31"]=1;
    this.traceFlag["mbd_1.c:51c30"]=1;
    this.traceFlag["mbd_1.c:58c18"]=1;
    this.traceFlag["mbd_1.c:58c32"]=1;
    this.traceFlag["mbd_1.c:70c18"]=1;
    this.traceFlag["mbd_1.c:76c18"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["mbd_1.c:37"]=1;
    this.lineTraceFlag["mbd_1.c:44"]=1;
    this.lineTraceFlag["mbd_1.c:51"]=1;
    this.lineTraceFlag["mbd_1.c:58"]=1;
    this.lineTraceFlag["mbd_1.c:64"]=1;
    this.lineTraceFlag["mbd_1.c:70"]=1;
    this.lineTraceFlag["mbd_1.c:76"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
