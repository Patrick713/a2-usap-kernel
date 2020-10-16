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
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x4d127d75, "usb_ep_disable" },
	{ 0xcdbf753d, "usb_ep_enable" },
	{ 0xaa1a9edd, "snd_pcm_period_elapsed" },
	{ 0x1bee5592, "usb_ep_queue" },
	{ 0xd93c1102, "_snd_pcm_stream_lock_irqsave" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xb0a0bfe8, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x32e5f408, "snd_pcm_hw_constraint_integer" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5b555848, "snd_pcm_set_ops" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xb469fa85, "snd_pcm_stream_unlock_irqrestore" },
	{ 0x9a33d19f, "snd_pcm_lib_free_pages" },
	{ 0x5c88d591, "snd_pcm_lib_ioctl" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xb544d9c, "snd_pcm_lib_malloc_pages" },
	{ 0xdcaaae74, "snd_card_new" },
	{ 0xbbbb2921, "usb_ep_dequeue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x53ff8a7d, "config_ep_by_speed" },
	{ 0x81cbdd08, "usb_ep_free_request" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x427f161a, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x952b0e1e, "snd_card_free" },
	{ 0x84e5f73d, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x883200ae, "snd_pcm_new" },
};

MODULE_INFO(depends, "udc-core,snd-pcm,snd,libcomposite");


MODULE_INFO(srcversion, "16F7050502E3DCCCD3EAA67");
