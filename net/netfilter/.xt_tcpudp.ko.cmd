cmd_net/netfilter/xt_tcpudp.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/netfilter/xt_tcpudp.ko net/netfilter/xt_tcpudp.o net/netfilter/xt_tcpudp.mod.o;  true