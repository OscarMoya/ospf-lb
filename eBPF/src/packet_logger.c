//go:build ignore

#include <linux/bpf.h>
#include <bpf/bpf_helpers.h>

/*
This is a "hello world" program for eBPF. It logs a message to the kernel log every time a packet is received. This
is the bread and butter to validate that everything is working as expected

*/

// This function is called for each packet that arrives at the network interface
int packet_filter(struct __sk_buff *skb) {
    bpf_trace_printk("Packet received!\n", 18);
    return 0;
}

char __license[] SEC("license") = "Dual MIT/GPL"; 