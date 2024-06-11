//go:build ignore

#include <uapi/linux/bpf.h>
#include <uapi/linux/if_ether.h>
#include <uapi/linux/ip.h>
#include <uapi/linux/udp.h>

/*
This is a "hello world" program for eBPF. It logs a message to the kernel log every time a packet is received. This
is the bread and butter to validate that everything is working as expected

*/

// This function is called for each packet that arrives at the network interface
int packet_filter(struct __sk_buff *skb) {
    bpf_trace_printk("Packet received!\n");
    return 0;
}
