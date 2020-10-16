#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x3f0307fe, "icmpv6_send" },
	{ 0xb545fc7c, "dst_release" },
	{ 0x9829201d, "nf_ct_attach" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x5f754e5a, "memset" },
	{ 0x564d3604, "l3mdev_master_ifindex_rcu" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xd4432741, "ip6_route_output_flags" },
	{ 0xd9fcfa3e, "ipv6_skip_exthdr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x44da5d0f, "__csum_ipv6_magic" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x2bf8ed1d, "ip6_local_out" },
	{ 0xc3d6d391, "ip6_dst_hoplimit" },
	{ 0x952da7ff, "dev_queue_xmit" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xcd030bb7, "xfrm_lookup" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0x89e39bc1, "nf_ip6_checksum" },
	{ 0xd542439, "__ipv6_addr_type" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "EE3C9ED3747E193AAFF85F7");
