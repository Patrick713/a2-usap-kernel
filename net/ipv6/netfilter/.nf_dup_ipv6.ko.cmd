cmd_net/ipv6/netfilter/nf_dup_ipv6.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/ipv6/netfilter/nf_dup_ipv6.ko net/ipv6/netfilter/nf_dup_ipv6.o net/ipv6/netfilter/nf_dup_ipv6.mod.o;  true
