cmd_net/ipv4/netfilter/nf_tproxy_ipv4.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/ipv4/netfilter/nf_tproxy_ipv4.ko net/ipv4/netfilter/nf_tproxy_ipv4.o net/ipv4/netfilter/nf_tproxy_ipv4.mod.o;  true
